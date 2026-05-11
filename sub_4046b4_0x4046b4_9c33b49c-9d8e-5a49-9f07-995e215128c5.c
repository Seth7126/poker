// ============================================================
// 函数名称: sub_4046b4
// 虚拟地址: 0x4046b4
// WARP GUID: 9c33b49c-9d8e-5a49-9f07-995e215128c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0, sub_4046b4, sub_404688
// [被调用的父级函数]: sub_4046b4, sub_404748, sub_4d88f8
// ============================================================

int32_t* __convention("regparm")sub_4046b4(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t i_4 = arg3
    arg1.b = *arg2
    int32_t edx
    edx.b = arg2[1]
    
    if (arg1.b == 0xa || arg1.b == 0xb)
    label_4046f9:
        int32_t i
        
        do
            *ebx = 0
            ebx = &ebx[1]
            i = i_4
            i_4 -= 1
        while (i s> 1)
    else if (arg1.b == 0xc)
        int32_t i_1
        
        do
            *ebx = 0
            ebx[1] = 0
            ebx[2] = 0
            ebx[3] = 0
            ebx = &ebx[4]
            i_1 = i_4
            i_4 -= 1
        while (i_1 s> 1)
    else
        int32_t ebp
        
        if (arg1.b == 0xd)
            int32_t var_10_1 = ebp
            int32_t i_2
            
            do
                ebx += *(arg2 + edx + 2)
                *(arg2 + edx + 6)
                **(arg2 + edx + 0xa)
                arg1 = sub_4046b4()
                i_2 = i_4
                i_4 -= 1
            while (i_2 s> 1)
        else
            if (arg1.b != 0xe)
                if (arg1.b == 0xf || arg1.b == 0x11)
                    goto label_4046f9
                
                arg1.b = 2
                noreturn sub_4027e0(arg1) __tailcall
            
            int32_t var_10_2 = ebp
            int32_t i_3
            
            do
                int32_t* eax_1 = ebx
                ebx += *(arg2 + edx + 2)
                arg1 = sub_404688(eax_1, arg2)
                i_3 = i_4
                i_4 -= 1
            while (i_3 s> 1)
    
    return arg1
}
