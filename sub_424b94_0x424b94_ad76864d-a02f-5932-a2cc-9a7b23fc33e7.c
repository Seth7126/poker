// ============================================================
// 函数名称: sub_424b94
// 虚拟地址: 0x424b94
// WARP GUID: ad76864d-a02f-5932-a2cc-9a7b23fc33e7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_423e50, sub_42afdc, sub_42affc, sub_4030a0, sub_423f18, sub_403428
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_424b94(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
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
    sub_423e50(arg1, 0)
    sub_42afdc(arg1, 0xb9)
    sub_42affc(arg1, 0x59)
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_423f18(arg1, 0)
    *(arg1 + 0x20e) = 1
    *(arg1 + 0x20f) = 1
    edx.b = 1
    void* eax_5 = sub_4030a0(ecx_1, edx)
    arg1[0x82] = eax_5
    *(eax_5 + 0xc) = arg1
    
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
