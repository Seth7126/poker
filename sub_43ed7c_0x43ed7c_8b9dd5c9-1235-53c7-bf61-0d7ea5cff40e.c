// ============================================================
// 函数名称: sub_43ed7c
// 虚拟地址: 0x43ed7c
// WARP GUID: 8b9dd5c9-1235-53c7-bf61-0d7ea5cff40e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43ed7c(char* arg1, int32_t arg2, uint16_t* arg3 @ esi, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = arg1[1]
    arg1[1] += arg1.b
    char* eax = sbb.d(arg1, *arg1, temp0 + arg1.b u< temp0)
    int32_t edx = arg2 | *(eax + 0x61)
    
    if (edx u>= 0)
        int32_t eflags
        __outsb(edx.w, *arg3, arg3, eflags)
        
        if (edx == 0)
            jump(sub_43ed55+0x83)
        
        jump(sub_43ebb1+0x1e4)
    
    *0x10042 = *0x10042
    *eax += eax.b
    int16_t ds
    uint32_t var_4 = zx.d(ds)
    char temp1 = *arg3
    *arg3 += 0x42
    char* var_8 = eax
    
    if (temp1 + 0x42 u< temp1)
        undefined
    
    jump("ntShowHint")
}
