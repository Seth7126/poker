// ============================================================
// 函数名称: sub_43813c
// 虚拟地址: 0x43813c
// WARP GUID: d513e6b7-6aac-580d-a074-88bb426109f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4372f4, sub_4128b4, sub_4380b8, sub_437e28, sub_4128a4
// [被调用的父级函数]: sub_437dd0
// ============================================================

int32_t __convention("regparm")sub_43813c(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4372f4(arg1)
    sub_4372f4(arg1)
    int32_t var_10 = sub_4128a4(arg2)
    (*(*arg2 + 4))()
    (*(*arg2 + 4))()
    char var_1c
    int32_t ebx_1
    ebx_1.b = var_1c
    ebx_1.b &= 0xff
    sub_4128b4(arg2)
    int32_t var_18
    
    if (var_1c.d != var_18 && ebx_1.b == 0x49 && (var_1c.w u>> 8).b == 0x4c)
        return sub_4380b8(arg1, arg2)
    
    return sub_437e28(arg1, arg2)
}
