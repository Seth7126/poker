// ============================================================
// 函数名称: sub_4455e4
// 虚拟地址: 0x4455e4
// WARP GUID: 8a0b0c2f-05e3-5bd3-9442-1f421587db24
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_430aa4, sub_448668
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4455e4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if ((arg2[1] & 0xfff0) == 0xf020 && arg1 == *(data_5317d8 + 0x38))
    if ((arg2[1] & 0xfff0) == 0xf020 && arg1 == *(data_5317d8 + 0x38))
        sub_448668(data_5317d8, arg2)
    else if ((arg2[1] & 0xfff0) != 0xf010 || (arg1[8].b & 0x10) != 0 || *(arg1 + 0x4b) == 0
            || *(arg1 + 0x213) == 1)
        sub_430aa4(arg1, arg2)
    
    int32_t result = arg2[1] & 0xfff0
    
    if ((result != 0xf020 && result != 0xf120) || (arg1[8].b & 0x10) != 0 || *(arg1 + 0x4b) == 0)
        return result
    
    int32_t* ebx
    ebx.w = 0xffd5
    return sub_4032ac(arg1)
}
