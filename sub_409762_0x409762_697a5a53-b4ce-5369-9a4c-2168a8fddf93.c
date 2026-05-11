// ============================================================
// 函数名称: sub_409762
// 虚拟地址: 0x409762
// WARP GUID: 697a5a53-b4ce-5369-9a4c-2168a8fddf93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409a5d
// [被调用的父级函数]: sub_409680
// ============================================================

void __convention("regparm")sub_409762(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (arg1.b != 0x2a)
        while (true)
            if (arg1.b u< 0x30)
                return 
            
            if (arg1.b u> 0x39)
                return 
            
            arg1.b -= 0x30
            ebx = ebx * 0xa + zx.d(arg1.b)
            
            if (arg5 == arg3)
                break
            
            arg1.b = *arg5
            arg5 = &arg5[1]
        
        goto label_409a68
    
    arg1 = arg4[-2]
    
    if (arg1 u<= arg4[2])
        arg4[-2] += 1
        int32_t ebx_2 = arg4[3]
        *(ebx_2 + (arg1 << 3))
        *(ebx_2 + (arg1 << 3) + 4)
    
    if (arg5 != arg3)
        arg1.b = *arg5
        return 
    
    label_409a68:
    sub_409a5d(arg6 - arg4[-1], arg4)
    *arg4
}
