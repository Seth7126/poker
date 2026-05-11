// ============================================================
// 函数名称: sub_403ebc
// 虚拟地址: 0x403ebc
// WARP GUID: 372704a0-130e-5ee3-be97-68fbc6403c48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402754
// [被调用的父级函数]: sub_4040c4, sub_404138, sub_4043ac, sub_403ee0, sub_404248, sub_403e4c, sub_404410, sub_405074
// ============================================================

char* __convention("regparm")sub_403ebc(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s<= 0)
    if (arg1 s<= 0)
        return 0
    
    char* result = sub_402754(arg1 + 9) + 8
    *(result - 4) = arg1
    *(result - 8) = 1
    result[arg1] = 0
    return result
}
