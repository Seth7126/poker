// ============================================================
// 函数名称: sub_43caf4
// 虚拟地址: 0x43caf4
// WARP GUID: 5593d170-6d13-5437-b48c-05e5af485d9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439a38, sub_4033d0, sub_415d18, sub_43d768, sub_4030a0, sub_403428
// [被调用的父级函数]: sub_43deb4
// ============================================================

int32_t* __convention("regparm")sub_43caf4(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp = &var_14
    
    if (arg2.b != 0)
        void var_24
        esp = &var_24
        arg1 = sub_4033d0(arg3, arg2)
    
    var_8:3.b = arg2.b
    arg2.b = 1
    int32_t* eax
    int32_t ecx_1
    int32_t edx
    eax, ecx_1, edx = sub_439a38(&data_438654, arg2)
    arg1[0xa] = eax
    eax[0x1f] = arg1
    eax[0x1e] = *(*arg1 + 0x38)
    eax[0x19] = arg1
    edx.b = 1
    void* eax_4 = sub_4030a0(ecx_1, edx)
    arg1[0xe] = eax_4
    *(eax_4 + 0xc) = arg1
    *(eax_4 + 8) = 0x43d354
    *(arg1 + 0x35) = 1
    sub_415d18(arg1, 0, arg3)
    void* eax_6 = arg1[0xa]
    *(eax_6 + 0x2f) = 0
    *(eax_6 + 0x30) = 0
    sub_43d768(arg1)
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    esp[4]
    return arg1
}
