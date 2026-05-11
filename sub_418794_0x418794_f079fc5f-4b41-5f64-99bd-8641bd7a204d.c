// ============================================================
// 函数名称: sub_418794
// 虚拟地址: 0x418794
// WARP GUID: f079fc5f-4b41-5f64-99bd-8641bd7a204d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41845c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_418794(void* arg1)
{
    // 第一条实际指令: int32_t result = sub_41845c(arg1)
    int32_t result = sub_41845c(arg1)
    
    if (*(arg1 + 0x20) == 0)
        return result
    
    return (*(**(arg1 + 0x20) + 0xc))()
}
