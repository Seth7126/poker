// ============================================================
// 函数名称: sub_493f24
// 虚拟地址: 0x493f24
// WARP GUID: 8a3fece3-c14f-5e5b-a903-1de9c9e18f0b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, WaitForSingleObject
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_497168
// ============================================================

int32_t __convention("regparm")sub_493f24(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: enum WAIT_EVENT eax_1 = WaitForSingleObject(*(arg1 + 4), arg2)
    enum WAIT_EVENT eax_1 = WaitForSingleObject(*(arg1 + 4), arg2)
    int32_t result
    
    if (eax_1 == WAIT_FAILED)
        result.b = 3
        *(arg1 + 8) = GetLastError()
    else
        if (eax_1 == 0)
            return 0
        
        if (eax_1 == 0x80)
            result.b = 2
        else if (eax_1 == 0x102)
            result.b = 1
        else
            result.b = 3
    
    return result
}
