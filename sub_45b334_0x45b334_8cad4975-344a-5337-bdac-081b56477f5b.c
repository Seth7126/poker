// ============================================================
// 函数名称: sub_45b334
// 虚拟地址: 0x45b334
// WARP GUID: 8cad4975-344a-5337-bdac-081b56477f5b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45b2cc
// ============================================================

int32_t __fastcallsub_45b334(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* ebx = *(arg3 + 0x19a)
    void* ebx = *(arg3 + 0x19a)
    
    if (*(ebx + 0x30) != 0)
        goto label_45b369
    
    int32_t result = (*(*(arg3 + 0x19e) + 0xc))()
    
    if (result != 0)
        *(ebx + 0x30) = 1
    label_45b369:
        int32_t eax_1 = *(arg3 + 0x12e)
        (*(*(arg3 + 0x1a2) + 4))(arg4, arg1, arg2, eax_1)
        result = *(ebx + 0x34)
        
        if (result u>= eax_1)
            *(ebx + 0x30) = 0
            *(ebx + 0x34) = 0
    
    return result
}
