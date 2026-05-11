// ============================================================
// 函数名称: sub_4909b8
// 虚拟地址: 0x4909b8
// WARP GUID: c32ead4b-756a-54e5-9b20-44c5fdcad101
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_490768, sub_4318d0
// [被调用的父级函数]: sub_51b687
// ============================================================

int32_t __convention("regparm")sub_4909b8(void** arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: arg1[2].b = arg3
    arg1[2].b = arg3
    int32_t eax
    eax.b = arg3
    int32_t esi = *((eax << 2) + &data_52f57c)
    int32_t eax_2 = sub_4318d0(arg2)
    int32_t* eax_3 = arg1[1]
    return sub_490768(arg1, "SetCooperativeLevel", (*(*eax_3 + 0x18))(eax_3, eax_2, esi))
}
