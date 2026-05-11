// ============================================================
// 函数名称: sub_432e84
// 虚拟地址: 0x432e84
// WARP GUID: a564d950-e443-5aab-afc2-e216db17e8f3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawTextA
// [内部子函数调用]: sub_40423c, sub_42d6dc, sub_419b40, sub_40faac
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_432e84(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    sub_40faac(arg2, 0, 0, arg4, 0)
    enum DRAW_TEXT_FORMAT format = sub_42d6dc(arg3) | 0xc10
    uint8_t* lpchText = sub_40423c(arg1)
    int32_t result = DrawTextA(sub_419b40(*(arg3 + 0x1f0)), lpchText, 0xffffffff, arg4, format)
    arg4[2] += 6
    arg4[3] += 2
    return result
}
