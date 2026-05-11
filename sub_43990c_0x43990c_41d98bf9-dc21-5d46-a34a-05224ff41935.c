// ============================================================
// 函数名称: sub_43990c
// 虚拟地址: 0x43990c
// WARP GUID: 41d98bf9-dc21-5d46-a34a-05224ff41935
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b7cc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43990c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x20))()
    char result = (*(*arg1 + 0x20))()
    
    if (result == 0)
        return result
    
    return sub_43b7cc(arg1[6], arg2)
}
