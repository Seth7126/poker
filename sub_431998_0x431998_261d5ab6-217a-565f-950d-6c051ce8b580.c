// ============================================================
// 函数名称: sub_431998
// 虚拟地址: 0x431998
// WARP GUID: 261d5ab6-217a-565f-950d-6c051ce8b580
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetClientRect
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: sub_442fa0
// ============================================================

BOOL __convention("regparm")sub_431998(int32_t* arg1, RECT* arg2)
{
    // 第一条实际指令: return GetClientRect(sub_4318d0(arg1), arg2)
    return GetClientRect(sub_4318d0(arg1), arg2)
}
