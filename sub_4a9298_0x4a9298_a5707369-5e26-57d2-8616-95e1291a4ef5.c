// ============================================================
// 函数名称: sub_4a9298
// 虚拟地址: 0x4a9298
// WARP GUID: a5707369-5e26-57d2-8616-95e1291a4ef5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a9298(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x68)
    void* ecx = *(arg1 + 0x68)
    int32_t result
    result.b = ecx != 0
    
    if (result.b != 0)
        result.b = *(ecx + 0x10)
    
    return result
}
