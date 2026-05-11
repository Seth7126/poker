// ============================================================
// 函数名称: sub_415e8c
// 虚拟地址: 0x415e8c
// WARP GUID: 04356577-fc9f-5b63-b0a6-c683b4701318
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_4103c8
// [被调用的父级函数]: sub_415ee0
// ============================================================

int32_t __convention("regparm")sub_415e8c(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    
    if (*(arg1 + 0x10) == 0)
        arg2.b = 1
        int32_t ecx
        *(arg1 + 0x10) = sub_4030a0(ecx, arg2)
    
    int32_t result = sub_4103c8(*(arg1 + 0x10), esi)
    *(esi + 4) = arg1
    return result
}
