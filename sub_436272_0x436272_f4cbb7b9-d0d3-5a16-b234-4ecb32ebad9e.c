// ============================================================
// 函数名称: sub_436272
// 虚拟地址: 0x436272
// WARP GUID: f4cbb7b9-d0d3-5a16-b234-4ecb32ebad9e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4361e4
// ============================================================

int32_t __convention("regparm")sub_436272(int32_t arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, void* arg5 @ esi, char* arg6 @ edi, char arg7)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx
    int32_t eax
    eax.b = *0x1c004160
    char* eax_1 = eax | *arg3
    
    if (eax_1 s< 0)
        char temp0 = *0x73754354
        *0x73754354 += arg3.b
        
        if (temp0 == neg.b(arg3.b))
            jump(sub_4362e0+0x7e)
        
        jump(&data_4362e8[7])
    
    eax_1[0x41] += eax_1.b
    eax_1[0x64] += (arg3 + 1).b
    eax_1[0xac00436d] += arg2.b
    *(arg3 + 0x618c0043) += arg2.b
    arg7 += arg2:1.b
    *arg6 += eax_1.b
    eax_1[0x6c004166] += arg2:1.b
    void* ecx_3
    ecx_3.w = (arg3 + 4).w + 1
    *(arg5 + 0x41) += arg2:1.b
    eax_1[0x66] += arg2:1.b
    *(arg4 + 0xe0043) += (entry_ebx.w + 2).b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    eax_1.b += *eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    eax_1[arg2 + 0x600040] += (entry_ebx.w + 2):1.b
    *eax_1 += eax_1.b
    eax_1.b += *eax_1
    int32_t eflags
    __out_dx_oeax(arg2.w, eax_1, eflags)
    *0x5400400c = eax_1
    undefined
}
