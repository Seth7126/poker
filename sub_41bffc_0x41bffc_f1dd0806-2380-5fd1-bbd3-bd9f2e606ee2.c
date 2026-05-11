// ============================================================
// 函数名称: sub_41bffc
// 虚拟地址: 0x41bffc
// WARP GUID: f1dd0806-2380-5fd1-bbd3-bd9f2e606ee2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_44b8a0, sub_44bc5c, sub_44bd74
// ============================================================

int32_t __convention("regparm")sub_41bffc(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 4)
    int32_t* ecx = *(arg1 + 4)
    
    if (ecx == 0)
        return 0
    
    return (*(*ecx + 0x20))()
}
