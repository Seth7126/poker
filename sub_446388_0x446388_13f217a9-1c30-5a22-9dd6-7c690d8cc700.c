// ============================================================
// 函数名称: sub_446388
// 虚拟地址: 0x446388
// WARP GUID: 13f217a9-1c30-5a22-9dd6-7c690d8cc700
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PostMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_446244, sub_446c28, sub_44613c
// ============================================================

BOOL __convention("regparm")sub_446388(int32_t* arg1)
{
    // 第一条实际指令: return PostMessageA(sub_4318d0(arg1), 0xb021, 0, 0)
    return PostMessageA(sub_4318d0(arg1), 0xb021, 0, 0)
}
