// ============================================================
// 函数名称: sub_51aa14
// 虚拟地址: 0x51aa14
// WARP GUID: 4b191cf6-fdb2-5b03-8781-85906701bb6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51ab0c
// ============================================================

uint32_t __fastcallsub_51aa14(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t dwParam2 = 0
    int32_t dwParam2 = 0
    int32_t var_18 = 0x4002
    int32_t var_14 = arg1
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    return mciSendCommandA(zx.d(*(arg2 + 0x2da)), 0x873, 0x1800000, &dwParam2)
}
