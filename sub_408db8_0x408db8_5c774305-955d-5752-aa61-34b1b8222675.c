// ============================================================
// 函数名称: sub_408db8
// 虚拟地址: 0x408db8
// WARP GUID: 5c774305-955d-5752-aa61-34b1b8222675
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078
// [被调用的父级函数]: sub_41627c
// ============================================================

int32_t __convention("regparm")sub_408db8(char* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (sub_404078(arg1) != 0)
        int32_t eax_1
        eax_1.b = *arg1
        eax_1.b -= 0x41
        char temp0_1 = eax_1.b
        eax_1.b -= 0x1a
        
        if (temp0_1 u< 0x1a)
        label_408dde:
            int32_t eax_3 = sub_404078(arg1)
            
            if (eax_3 s>= 2)
                int32_t i_1 = eax_3 - 1
                int32_t edi_1 = 2
                int32_t i
                
                do
                    char edx = arg1[edi_1 - 1] - 0x30
                    
                    if (edx u>= 0xa && edx - 0x11 u>= 0x1a && edx != 0x2f && edx - 0x31 u>= 0x1a)
                        return result
                    
                    edi_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            result.b = 1
        else
            char temp2_1 = eax_1.b
            eax_1.b -= 4
            
            if (temp2_1 == 4)
                goto label_408dde
            
            eax_1.b -= 2
            char temp3_1 = eax_1.b
            eax_1.b -= 0x1a
            
            if (temp3_1 u< 0x1a)
                goto label_408dde
    
    return result
}
