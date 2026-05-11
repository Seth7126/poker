// ============================================================
// 函数名称: sub_40c9e0
// 虚拟地址: 0x40c9e0
// WARP GUID: 49298f30-b8a9-5508-9958-070a6c7c7949
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: EnterCriticalSection, WaitForSingleObject, GetCurrentThreadId
// [内部子函数调用]: sub_40c9a4
// [被调用的父级函数]: sub_416cb4, sub_4102e4, sub_4ade4c, sub_442735, sub_4427a0, sub_414da8, sub_4132fc, sub_442414, sub_40c964
// ============================================================

int32_t __convention("regparm")sub_40c9e0(void* arg1)
{
    // 第一条实际指令: int32_t result = EnterCriticalSection(arg1 + 4)
    int32_t result = EnterCriticalSection(arg1 + 4)
    
    if (*(arg1 + 0x34) == 0)
        *(arg1 + 0x2c) = GetCurrentThreadId()
        
        if (sub_40c9a4(arg1) == 0)
            WaitForSingleObject(*(arg1 + 0x1c), 0xffffffff)
        
        *(arg1 + 0x24) = *(arg1 + 0x20)
        *(arg1 + 0x20) = 0
        result = 0
        *(arg1 + 0x2c) = 0
        *(arg1 + 0x34) = 1
    
    *(arg1 + 0x20) += 1
    return result
}
