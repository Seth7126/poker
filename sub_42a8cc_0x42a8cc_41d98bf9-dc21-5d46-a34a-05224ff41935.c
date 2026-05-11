// ============================================================
// 函数名称: sub_42a8cc
// 虚拟地址: 0x42a8cc
// WARP GUID: 41d98bf9-dc21-5d46-a34a-05224ff41935
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b7a8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a8cc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x20))()
    char result = (*(*arg1 + 0x20))()
    
    if (result == 0)
        return result
    
    return sub_42b7a8(arg1[6], arg2)
}
