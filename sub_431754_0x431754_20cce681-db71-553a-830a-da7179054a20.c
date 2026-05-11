// ============================================================
// 函数名称: sub_431754
// 虚拟地址: 0x431754
// WARP GUID: 20cce681-db71-553a-830a-da7179054a20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InvalidateRect
// [内部子函数调用]: sub_42c754, sub_431bcc
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_431754(void* arg1, void* arg2)
{
    // 第一条实际指令: BOOL result = sub_431bcc(arg1)
    BOOL result = sub_431bcc(arg1)
    
    if (result.b != 0)
        result = *(arg1 + 0x24)
        
        if (result != 0)
            result = sub_42c754(result, 0)
        
        if (*(arg2 + 4) == 0)
            result.b = (*(arg1 + 0x40) & 0x40) != 0
            result.b ^= 1
            char temp0_1 = result.b
            result.b = neg.b(result.b)
            return InvalidateRect(*(arg1 + 0x14c), nullptr, sbb.d(result, result, temp0_1 != 0))
    
    return result
}
