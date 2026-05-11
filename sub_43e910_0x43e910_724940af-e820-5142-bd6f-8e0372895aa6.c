// ============================================================
// 函数名称: sub_43e910
// 虚拟地址: 0x43e910
// WARP GUID: 724940af-e820-5142-bd6f-8e0372895aa6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43e520
// ============================================================

int32_t __convention("regparm")sub_43e910(void** arg1, uint16_t arg2, char arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    __outsd(arg2, *arg5, arg5, eflags)
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg6, arg2, eflags)
    *edi = temp0
    __out_immb_oeax(0x43, arg1, eflags)
    int32_t entry_ebx
    *(arg1 + 0xb004282) += entry_ebx.b
    char temp1 = *0x6d726f46
    *0x6d726f46 += arg1.b
    
    if (temp1 + arg1.b u>= temp1)
        arg1.b = __in_oeax_immb(0x43, eflags).b + arg2:1.b
    else
        *(arg1 - 0xfffbc1b) += arg3
    
    *arg1 += arg1
    jump(*(arg4 + entry_ebx + 0x10044))
}
