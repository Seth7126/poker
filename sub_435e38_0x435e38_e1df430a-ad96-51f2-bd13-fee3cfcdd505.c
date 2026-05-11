// ============================================================
// 函数名称: sub_435e38
// 虚拟地址: 0x435e38
// WARP GUID: e1df430a-ad96-51f2-bd13-fee3cfcdd505
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, GlobalDeleteAtom
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

BOOLsub_435e38()
{
    // 第一条实际指令: sub_4030d0(*data_530660)
    sub_4030d0(*data_530660)
    *data_530660 = 0
    sub_4030d0(*data_530a18)
    *data_530a18 = 0
    sub_4030d0(data_531750)
    data_531750 = 0
    sub_4030d0(data_531790)
    GlobalDeleteAtom(data_53175e)
    BOOL result = GlobalDeleteAtom(data_53175c)
    
    if (data_52e860 == 0)
        return result
    
    return FreeLibrary(data_52e860)
}
