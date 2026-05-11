// ============================================================
// 函数名称: sub_426698
// 虚拟地址: 0x426698
// WARP GUID: f94f5d8c-7048-5dd4-8c60-b8ae807d7d22
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DefWindowProcA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42663c
// ============================================================

LRESULT __convention("regparm")sub_426698(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: LRESULT result = DefWindowProcA(*(arg1 + 8), *arg2, arg2[1], arg2[2])
    LRESULT result = DefWindowProcA(*(arg1 + 8), *arg2, arg2[1], arg2[2])
    arg2[3] = result
    return result
}
