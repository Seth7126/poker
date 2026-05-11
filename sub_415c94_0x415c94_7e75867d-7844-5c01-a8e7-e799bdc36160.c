// ============================================================
// 函数名称: sub_415c94
// 虚拟地址: 0x415c94
// WARP GUID: 7e75867d-7844-5c01-a8e7-e799bdc36160
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ResumeThread
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_496e00, sub_51038c, sub_4a8f18, sub_4a8ea2
// ============================================================

uint32_t __convention("regparm")sub_415c94(void* arg1)
{
    // 第一条实际指令: uint32_t result = ResumeThread(*(arg1 + 4))
    uint32_t result = ResumeThread(*(arg1 + 4))
    
    if (result == 1)
        *(arg1 + 0xd) = 0
    
    return result
}
