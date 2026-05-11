// ============================================================
// 函数名称: sub_517794
// 虚拟地址: 0x517794
// WARP GUID: 053257d6-a988-576c-9936-8775ea94b266
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517a38
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void __convention("regparm")sub_517794(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void var_31e
    void var_31e
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_31e, arg2, 0x318)
    *edi = *esi_1
    int16_t i_2
    int32_t i_1 = sx.d(i_2)
    
    if (i_1 s<= 0)
        return 
    
    void* ebx_1 = &var_31e
    int32_t i
    
    do
        sub_517a38(arg1, *ebx_1)
        ebx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
