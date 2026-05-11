// ============================================================
// 函数名称: sub_439a38
// 虚拟地址: 0x439a38
// WARP GUID: 5275c421-72d8-5718-91f9-c8df61122403
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_415d18, sub_4395b0, sub_4030a0, sub_403428
// [被调用的父级函数]: sub_43caf4
// ============================================================

int32_t* __convention("regparm")sub_439a38(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ecx
    int32_t* var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    sub_415d18(arg1, 0, ecx)
    *(arg1 + 0x32) = 1
    *(arg1 + 0x2d) = 1
    *(arg1 + 0x2f) = 2
    arg1[0xc].b = 2
    int16_t eax_1
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = sub_4395b0()
    arg1[0x11].w = eax_1
    arg1[0xd] = 0xffffffff
    edx.b = 1
    void* eax_3 = sub_4030a0(ecx_1, edx)
    arg1[0x1b] = eax_3
    *(eax_3 + 0xc) = arg1
    *(eax_3 + 8) = sub_43c224
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
