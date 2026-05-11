// ============================================================
// 函数名称: sub_42b994
// 虚拟地址: 0x42b994
// WARP GUID: 46d56b25-994a-5f33-ab91-8224acf547aa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b984, sub_428c40
// [被调用的父级函数]: sub_42cefc, sub_4923b8, sub_4925fc, sub_42cb68, sub_42ce44, sub_42cbd0
// ============================================================

int32_t __convention("regparm")sub_42b994(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = sub_42b984(arg1)
    char result = sub_42b984(arg1)
    
    if (arg2 == result)
        return result
    
    if (arg2 == 0)
        return sub_428c40(nullptr)
    
    return sub_428c40(arg1)
}
