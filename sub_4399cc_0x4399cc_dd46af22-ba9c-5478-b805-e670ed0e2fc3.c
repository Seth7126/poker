// ============================================================
// 函数名称: sub_4399cc
// 虚拟地址: 0x4399cc
// WARP GUID: dd46af22-ba9c-5478-b805-e670ed0e2fc3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b998
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4399cc(int32_t* arg1, int16_t arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x38))()
    char result = (*(*arg1 + 0x38))()
    
    if (result == 0)
        return result
    
    return sub_43b998(arg1[6], arg2)
}
