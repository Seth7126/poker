// ============================================================
// 函数名称: sub_4b3c6e
// 虚拟地址: 0x4b3c6e
// WARP GUID: 1e4a80d8-5a1c-52fd-a695-f798610212a1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b3c6e(char* arg1, char* arg2, int32_t arg3, char* arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    *(entry_ebx - 1) += arg1.b
    *(arg4 + (arg1 << 1) + 0x69) |= arg2
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg5, arg2.w, eflags)
    *edi = temp0
    
    if (arg3 != 0xffffffff)
        jump(0x4b3c7a)
    
    *arg1 += arg1.b
    *arg4 += (entry_ebx - 1):1.b
    *(arg4 + edi) += (entry_ebx - 2):1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg2 += (entry_ebx - 3).b
    *arg1 += (arg3.w + 1):1.b
    arg1[2] += arg2:1.b
    *arg1 += arg1.b
    undefined
}
