// ============================================================
// 函数名称: sub_40b878
// 虚拟地址: 0x40b878
// WARP GUID: cad92738-ddee-5558-a00d-30a8241bfb65
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40bad8, sub_40b8f8
// ============================================================

int32_t __convention("regparm")sub_40b878(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *arg1
    int32_t eax_2 = *arg1
    
    if (eax_2 s<= 0xc0000092)
        if (eax_2 == 0xc0000092)
            eax_2.b = 6
            return eax_2
        
        if (eax_2 s> 0xc000008e)
            int32_t eax_3 = eax_2 + 0x3fffff71
            
            if (eax_3 u< 2)
                eax_2.b = 6
                return eax_2
            
            if (eax_3 == 2)
                eax_2.b = 8
                return eax_2
        else
            if (eax_2 == 0xc000008e)
                eax_2.b = 7
                return eax_2
            
            if (eax_2 == 0xc0000005)
                int32_t eax
                eax.b = 0xb
                return eax
            
            if (eax_2 == 0xc000008c)
                int32_t eax_1
                eax_1.b = 4
                return eax_1
            
            if (eax_2 == 0xc000008d)
                eax_2.b = 9
                return eax_2
    else
        switch (eax_2)
            case 0xc0000093
                eax_2.b = 9
                return eax_2
            case 0xc0000094
                int32_t eax_4
                eax_4.b = 3
                return eax_4
            case 0xc0000095
                eax_2.b = 5
                return eax_2
            case 0xc0000096
                eax_2.b = 0xc
                return eax_2
            case 0xc00000fd
                int32_t eax_5
                eax_5.b = 0xe
                return eax_5
            case 0xc000013a
                eax_2.b = 0xd
                return eax_2
    
    eax_2.b = 0x16
    return eax_2
}
