// ============================================================
// 函数名称: sub_4ac9b6
// 虚拟地址: 0x4ac9b6
// WARP GUID: dc51c290-4655-5969-968c-004e3abf7e09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4ac9b6(char* arg1, int32_t arg2, char* arg3, uint16_t* arg4 @ esi, int32_t arg5 @ edi) __noreturn
{
    // 第一条实际指令: int16_t entry_ebx
    int16_t entry_ebx
    arg1:1.b += entry_ebx:1.b
    int32_t eflags
    char temp0
    char temp1
    temp0, temp1, eflags = __aad_immb(0x4a, arg1.b, arg1:1.b)
    arg1.b = temp0
    arg1:1.b = temp1
    *(arg5 + ((arg2 - 1) << 3)) += (arg2 - 1).b
    arg4[arg3 * 4 + 0x70025].b += entry_ebx.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b += *arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[arg2 + 0x3c003e] += entry_ebx:1.b
    char temp0_1 = *arg1
    *arg1 += arg1.b
    *(arg3 * 3 + 0x64) = adc.b(*(arg3 * 3 + 0x64), (arg2 - 2).b, temp0_1 + arg1.b u< temp0_1)
    uint16_t* esi = __outsd((arg2 - 2).w, *arg4, arg4, eflags)
    __outsd((arg2 - 2).w, *esi, esi, eflags)
    *(arg3 + 0x65)
    int32_t edx
    edx:1.b = (arg2 - 2):1.b ^ *arg3
    *arg3 ^= (entry_ebx + 2):1.b
    trap(0xd)
}
