// ============================================================
// 函数名称: sub_4048a0
// 虚拟地址: 0x4048a0
// WARP GUID: cab46dad-525e-515d-bdad-f5048680c78d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404668, sub_4048a0, sub_40422c, sub_4050f0, sub_405ba0, sub_404874, sub_4027e0, sub_405564
// [被调用的父级函数]: sub_4048a0, sub_404960, sub_49e018
// ============================================================

void* __convention("regparm")sub_4048a0(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t i_7 = arg3
    arg1.b = *arg2
    int32_t edx
    edx.b = arg2[1]
    void* result
    int32_t ebp
    
    switch (arg1.b)
        case 0xa
            int32_t i_1
            
            do
                result = *ebx
                ebx = &ebx[1]
                sub_40422c(result)
                i_1 = i_7
                i_7 -= 1
            while (i_1 s> 1)
        case 0xb
            int32_t i_2
            
            do
                int32_t* eax = ebx
                ebx = &ebx[1]
                result = sub_404668(eax)
                i_2 = i_7
                i_7 -= 1
            while (i_2 s> 1)
        case 0xc
            int32_t i_3
            
            do
                int16_t* eax_1 = ebx
                ebx = &ebx[4]
                result = sub_4050f0(eax_1)
                i_3 = i_7
                i_7 -= 1
            while (i_3 s> 1)
        case 0xd
            int32_t var_10_1 = ebp
            int32_t i_4
            
            do
                ebx += *(arg2 + edx + 2)
                *(arg2 + edx + 6)
                **(arg2 + edx + 0xa)
                result = sub_4048a0()
                i_4 = i_7
                i_7 -= 1
            while (i_4 s> 1)
        case 0xe
            int32_t var_10_2 = ebp
            int32_t i_5
            
            do
                int32_t* eax_3 = ebx
                ebx += *(arg2 + edx + 2)
                result = sub_404874(eax_3, arg2)
                i_5 = i_7
                i_7 -= 1
            while (i_5 s> 1)
        case 0xf
            int32_t i_6
            
            do
                int32_t* eax_4 = *ebx
                ebx = &ebx[1]
                result = sub_405ba0(eax_4)
                i_6 = i_7
                i_7 -= 1
            while (i_6 s> 1)
        default
            if (arg1.b != 0x11)
                arg1.b = 2
                noreturn sub_4027e0(arg1) __tailcall
            
            int32_t i
            
            do
                result = *ebx
                ebx = &ebx[1]
                sub_405564(result)
                i = i_7
                i_7 -= 1
            while (i s> 1)
    
    return result
}
