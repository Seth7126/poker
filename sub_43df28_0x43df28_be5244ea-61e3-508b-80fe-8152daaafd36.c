// ============================================================
// 函数名称: sub_43df28
// 虚拟地址: 0x43df28
// WARP GUID: be5244ea-61e3-508b-80fe-8152daaafd36
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cb8c, sub_403430, sub_403420, sub_43de98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43df28(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_43de98(data_5317c8)
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_43cb8c(arg1, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
