// ============================================================
// 函数名称: sub_443be4
// 虚拟地址: 0x443be4
// WARP GUID: d811137b-e934-59a6-a171-ac316223a76b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443fb4, sub_42b904, sub_443f38, sub_42efd0, sub_42ee38, sub_4431dc
// [被调用的父级函数]: sub_446ad8
// ============================================================

void __convention("regparm")sub_443be4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (arg2 == *(esi + 0x217))
        return 
    
    if (arg2 == 1 && esi[0x86].b == 0)
        sub_443f38(esi, 1)
    
    if ((esi[8].b & 0x10) == 0)
        sub_42ee38(esi)
    
    arg1.b = *(esi + 0x217)
    *(esi + 0x217) = arg2
    
    if ((arg2 == 2 || arg1.b == 2) && esi[0x4e].b == 0)
        sub_42b904(esi, sub_443fb4(esi))
    
    if ((esi[8].b & 0x10) == 0)
        sub_42efd0(esi)
    
    if (arg2 == 1)
        sub_4431dc(esi, 1)
}
