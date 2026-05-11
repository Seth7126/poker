// ============================================================
// 函数名称: sub_43992c
// 虚拟地址: 0x43992c
// WARP GUID: 053a3df8-ac5b-5892-a1ed-3f88bf3444da
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b83c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43992c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x24))()
    char result = (*(*arg1 + 0x24))()
    
    if (result == 0)
        return result
    
    return sub_43b83c(arg1[6], arg2)
}
