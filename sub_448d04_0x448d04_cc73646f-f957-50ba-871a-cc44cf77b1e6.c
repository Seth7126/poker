// ============================================================
// 函数名称: sub_448d04
// 虚拟地址: 0x448d04
// WARP GUID: cc73646f-f957-50ba-871a-cc44cf77b1e6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadIconA
// [内部子函数调用]: sub_41f678
// [被调用的父级函数]: sub_4481cc, sub_448668, sub_444f08, sub_44861c, sub_449b10
// ============================================================

HICON __convention("regparm")sub_448d04(void* arg1)
{
    // 第一条实际指令: HICON result = sub_41f678(*(arg1 + 0x88))
    HICON result = sub_41f678(*(arg1 + 0x88))
    
    if (result != 0)
        return result
    
    return LoadIconA(nullptr, 0x7f00)
}
