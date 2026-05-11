// ============================================================
// 函数名称: sub_4926a0
// 虚拟地址: 0x4926a0
// WARP GUID: 9fcce6f5-3301-5cbe-a5ed-b5acf9bcb693
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_491c5c, sub_492528
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4926a0(int32_t* arg1, int16_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    arg1.w = *arg2
    int16_t temp0 = arg1.w
    arg1.w -= 0x20
    
    if (temp0 == 0x20)
        arg1.b = esi[0xb2].b
        int32_t edx_6
        edx_6.b = arg1.b
        
        if (*(&esi[edx_6 * 4] + 0x1f9) != 0)
            *(esi + 0x292) = arg1.b
            int32_t ecx
            int32_t edx_9
            arg1, edx_9 = sub_492528(esi, arg1, ecx)
            
            if (esi[0xc1].b != 0)
                edx_9.b = *(esi + 0x292)
                int32_t ebx
                ebx.w = 0xffb6
                sub_4032ac(esi, edx_9)
                return sub_491c5c(esi)
    else
        int16_t temp1_1 = arg1.w
        arg1.w -= 5
        
        if (temp1_1 == 5)
            arg1.b = esi[0xb2].b
            int32_t edx_3
            
            do
                if (arg1.b u> 0)
                    arg1 -= 1
                
                if (arg1.b == 0)
                    break
                
                edx_3.b = arg1.b
            while (esi[edx_3 * 4 + 0x7e].b == 0)
            
            if (arg1.b != esi[0xb2].b)
                esi[0xb2].b = arg1.b
                return (*(*esi + 0x74))()
        else
            int16_t temp2_1 = arg1.w
            arg1.w -= 2
            
            if (temp2_1 == 2)
                arg1.b = esi[0xb2].b
                int32_t edx
                
                do
                    if (arg1.b u< 8)
                        arg1 += 1
                    
                    if (arg1.b == 8)
                        break
                    
                    edx.b = arg1.b
                while (esi[edx * 4 + 0x7e].b == 0)
                
                if (arg1.b != esi[0xb2].b)
                    esi[0xb2].b = arg1.b
                    return (*(*esi + 0x74))()
    
    return arg1
}
