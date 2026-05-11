// ============================================================
// 函数名称: sub_44ae42
// 虚拟地址: 0x44ae42
// WARP GUID: da7ede97-c369-53ed-899c-f8a5e3694f90
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44ae42(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, char** arg6 @ edi)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    *entry_ebx += arg3.b
    arg1[0x19] += (&entry_ebx[1]):1.b
    arg1[0xf0004319] += (&entry_ebx[2]).b
    int16_t ss
    int16_t var_3 = ss
    entry_ebx[3 + (arg4 << 2)] += arg1.b
    *arg1 += arg3.b
    *arg6 = arg1
    void* edi = &arg6[1]
    *(arg5 + ((arg2 + 2) << 3) + 0x42) += arg3.b
    arg1[0xffffffd6] += (&entry_ebx[3]):1.b
    char var_492bffc1[0x492bffbe]
    var_492bffc1[arg4 << 2] += arg1.b
    *(arg5 * 5 + 0x42) += arg1.b
    arg1[0xffffffb9] += arg3.b
    arg1[edi << 2] += arg3.b
    arg1[0xfffffff2] += arg3:1.b
    arg1.b += (&entry_ebx[3]):1.b
    int32_t eflags
    arg1.b = __salc(eflags)
    *(edi + arg2 + 8 + 0x43) += arg1.b
    arg1.b *= 2
    entry_ebx[arg2 + 0x4f] += arg1.b
    *(edi + arg2 + 8 - 0x3da7ffbd) += arg1:1.b
    *arg1 += arg1:1.b
    
    if (arg3 == 1)
        arg1[0x740042ed] += arg1:1.b
        arg1.b *= 2
        undefined
    
    *edi
    arg1[0x3f0044ad] += (&entry_ebx[4]).b
    *arg1 += (arg3 - 1).b
    
    if (arg4 + 1 s< 0)
        undefined
    
    jump("Ctrls6")
}
