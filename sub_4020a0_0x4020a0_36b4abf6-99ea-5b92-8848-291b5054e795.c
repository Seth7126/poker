// ============================================================
// 函数名称: sub_4020a0
// 虚拟地址: 0x4020a0
// WARP GUID: 36b4abf6-99ea-5b92-8848-291b5054e795
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401c64, sub_402014, sub_402074, sub_401eb4
// [被调用的父级函数]: sub_402194
// ============================================================

void* __convention("regparm")sub_4020a0(int32_t arg1)
{
    // 第一条实际指令: int32_t i = arg1
    int32_t i = arg1
    void* result
    
    while (true)
        int32_t* ebx_1 = data_53147c
        
        if (i s> ebx_1[2])
            ebx_1 = data_531484
            int32_t eax = ebx_1[2]
            
            if (i s> eax)
                ebx_1[2] = i
                
                do
                    ebx_1 = ebx_1[1]
                while (i s> ebx_1[2])
                
                *(data_531484 + 8) = eax
                
                if (ebx_1 == data_531484)
                    if (i s<= 0x1000)
                        ebx_1 = sub_402074(i)
                    
                    if (i s> 0x1000 || ebx_1 == 0)
                        if (sub_402014(i) == 0)
                            return nullptr
                        
                        if (i s> data_531488)
                            continue
                        
                        data_531488 -= i
                        
                        if (data_531488 s< 0xc)
                            i += data_531488
                            data_531488 = 0
                        
                        int32_t* eax_5 = data_53148c
                        data_53148c += i
                        *eax_5 = i | 2
                        result = &eax_5[1]
                        data_531424 += 1
                        data_531428 += i - 4
                        break
                else
                    data_531484 = ebx_1
        
        sub_401c64(ebx_1)
        int32_t i_1 = ebx_1[2]
        void* eax_8 = i_1 - i
        
        if (eax_8 s< 0xc)
            i = i_1
            
            if (ebx_1 == data_531484)
                data_531484 = ebx_1[1]
            
            void* eax_12 = ebx_1 + i
            *eax_12 &= 0xfffffffe
        else
            sub_401eb4(ebx_1 + i, eax_8)
        
        *ebx_1 = i | 2
        result = &ebx_1[1]
        data_531424 += 1
        data_531428 += i - 4
        break
    
    return result
}
