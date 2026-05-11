// ============================================================
// 函数名称: sub_4316f0
// 虚拟地址: 0x4316f0
// WARP GUID: 1c024e45-26d4-59bf-be3b-09f443fd71a9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDCEx, GetDC
// [内部子函数调用]: sub_40b56c, sub_403828, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

HDC __convention("regparm")sub_4316f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: HDC result
    HDC result
    int32_t edx
    
    if ((arg1[8].b & 0x10) == 0)
        result, edx = GetDC(sub_4318d0(arg1))
    else
        result, edx = GetDCEx(sub_4318d0(arg1), nullptr, DCX_CACHE | DCX_CLIPSIBLINGS)
    
    if (result != 0)
        *arg2 = arg1[0x53]
        return result
    
    edx.b = 1
    sub_40b56c(sub_40eacb+0x21, edx, data_5305fc)
    sub_403828()
    noreturn
}
