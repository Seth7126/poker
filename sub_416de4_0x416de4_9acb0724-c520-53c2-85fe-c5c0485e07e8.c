// ============================================================
// 函数名称: sub_416de4
// 虚拟地址: 0x416de4
// WARP GUID: 9acb0724-c520-53c2-85fe-c5c0485e07e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41feac
// ============================================================

int32_t __convention("regparm")sub_416de4(int32_t arg1, uint16_t arg2, int32_t* arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t temp1 = *arg3
    int32_t temp1 = *arg3
    *arg3 += arg1
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg3, arg3, eflags)
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg4, arg2, eflags)
    *edi = temp0
    __outsd(arg2, *esi, esi, eflags)
    
    if (temp1 + arg1 u< temp1)
        undefined
    
    jump(0x416ded)
}
