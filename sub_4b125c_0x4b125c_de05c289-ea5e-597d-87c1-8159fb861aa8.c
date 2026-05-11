// ============================================================
// 函数名称: sub_4b125c
// 虚拟地址: 0x4b125c
// WARP GUID: de05c289-ea5e-597d-87c1-8159fb861aa8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4b1210, sub_4030a0, sub_4b0f98, sub_403428
// [被调用的父级函数]: sub_4b008c, sub_4af488
// ============================================================

int32_t* __convention("regparm")sub_4b125c(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
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
    sub_4030a0(arg3, 0)
    arg1[1] = arg3
    int32_t edx
    edx.b = 1
    int32_t* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_4b1210(sub_4aed0c+0x48, edx, arg3)
    arg1[2] = eax_1
    edx_1.b = 1
    arg1[3] = sub_4b0f98(sub_4aea1e+0x27e, edx_1, arg1[1])
    
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
