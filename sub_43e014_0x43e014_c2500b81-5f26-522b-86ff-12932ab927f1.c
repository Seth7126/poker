// ============================================================
// 函数名称: sub_43e014
// 虚拟地址: 0x43e014
// WARP GUID: c2500b81-5f26-522b-86ff-12932ab927f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: TrackPopupMenu
// [内部子函数调用]: sub_43a014, sub_43c480, sub_40fa94, sub_439f30, sub_43c950, sub_43dfc8, sub_43d234, sub_43df80
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_43e014(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    sub_40fa94(arg2, arg3, &var_18)
    arg1[0x12] = var_18
    int32_t var_14
    arg1[0x13] = var_14
    sub_43df80(arg1)
    (*(*arg1 + 0x3c))()
    sub_43c480(arg1[0xa], 0, arg2, arg3)
    sub_43c950(arg1[0xa], 0)
    sub_439f30(arg1[0xa])
    sub_43d234(arg1)
    void* eax_11 = sub_43dfc8(arg1) & 0x7f
    int32_t edx_2
    edx_2.b = arg1[0x14].b
    int32_t eax_14
    eax_14.b = arg1[0x16].b
    int32_t eax_15
    eax_15.b = *(arg1 + 0x59)
    return TrackPopupMenu(sub_43a014(arg1[0xa]), 
        zx.d(*(eax_11 * 6 + &data_52e968 + (edx_2 << 1))) | zx.d(*((eax_14 << 1) + &data_52e974))
            | eax_15 << 0xa, 
        arg2, arg3, 0, *(data_5317c8 + 0x10), nullptr)
}
