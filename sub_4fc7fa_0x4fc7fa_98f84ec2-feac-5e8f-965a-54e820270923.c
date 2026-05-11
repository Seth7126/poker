// ============================================================
// 函数名称: sub_4fc7fa
// 虚拟地址: 0x4fc7fa
// WARP GUID: 98f84ec2-feac-5e8f-965a-54e820270923
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4fc834
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4fc7fa(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    *(arg4 + (arg3 << 2) - 0x3e) -= entry_ebx
    *(arg4 + (arg3 << 2) - 5) -= entry_ebx.b
    int32_t eflags
    int32_t eflags_1
    char temp0
    char temp1
    temp0, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
    arg1.b = temp0
    arg1:1.b = temp1
    *arg1 += arg1.b
    *(arg4 + (arg3 << 2) - 0x3e) -= entry_ebx.b
    int32_t eflags_3
    char temp0_1
    char temp1_1
    temp0_1, temp1_1, eflags_3 = __aas(arg1.b, arg1:1.b, __sti(eflags_1))
    arg1.b = temp0_1
    arg1:1.b = temp1_1
    *arg1 += arg1.b
    void* const edx
    edx.b = __return_addr.b | entry_ebx:1.b
    *0xd70a3d70 = arg1
    *0x3ffa = arg1
    arg1[0x43f8] += arg1.b
    char* temp0_2 = *(edx + 0x66)
    *(edx + 0x66) = arg1
    char temp0_3 = entry_ebx:1.b
    entry_ebx:1.b = entry_ebx:1.b
    entry_ebx:1.b = temp0_3
    int32_t eflags_4
    char temp0_4
    char temp1_2
    temp0_4, temp1_2, eflags_4 = __aas(temp0_2.b, temp0_2:1.b, eflags_3)
    char* eax
    eax.b = temp0_4
    eax:1.b = temp1_2
    *eax += eax.b
    int32_t esi
    long double x87_r0
    long double x87_r1
    return sub_4fc834(eax, esi, arg4, x87_r0, x87_r1) __tailcall
}
