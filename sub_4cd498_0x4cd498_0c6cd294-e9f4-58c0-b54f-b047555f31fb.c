// ============================================================
// 函数名称: sub_4cd498
// 虚拟地址: 0x4cd498
// WARP GUID: 0c6cd294-e9f4-58c0-b54f-b047555f31fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cd114, sub_4cd0a0, sub_4cc8a8, sub_5179dc, sub_4cd400, sub_4cc9c8, sub_4cc7ec, sub_52c3cc, sub_517edc, sub_517b0c, sub_403010
// [被调用的父级函数]: sub_4bca48, sub_4e6659, sub_4c4150, sub_4bf070, sub_4c3f8c, sub_4c1254, sub_4c8aa0, sub_4c4904, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4cd498(int32_t arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_66c = ebx
    void var_518
    __builtin_memcpy(&var_518, arg1, 0x104)
    char var_668 = 0
    int32_t var_52c = 0
    sub_52c3cc(0, 0, &var_518, 0)
    int16_t var_418
    
    if (var_418 s> 0)
        char i
        
        do
            ebx.b = var_668
            
            if (ebx.b != 0)
                int32_t eax_2 = sub_4cd0a0(ebx.b)
                
                if (add_overflow(eax_2, 0xffffffff))
                    sub_403010()
                    noreturn
                
                var_668 = sub_4cc9c8(eax_2 - 1)
            else
                var_668 = 0xa
            
            void var_530
            sub_4cc8a8(var_668, &var_530)
            int32_t __saved_ebp
            i = sub_4cd114(&__saved_ebp)
        while (i == 0)
    
    int32_t var_560 = sub_4cd0a0(var_668)
    int32_t eax_4
    eax_4.b = var_668
    eax_4.b -= 5
    char temp0 = eax_4.b
    eax_4.b -= 2
    char temp1_1
    
    if (temp0 u>= 2)
        eax_4.b -= 2
        temp1_1 = eax_4.b
        eax_4.b -= 2
    
    void var_310
    void var_108
    int32_t var_558
    void var_554
    
    if (temp0 u>= 2 && temp1_1 u>= 2)
        int32_t var_55c_1 = sub_4cd400(&var_310, 1)
        var_558 = sub_4cd400(&var_310, 2)
        
        if (var_668 == 7)
            int32_t edi_1 = 0
            void var_314
            int32_t i_1
            
            do
                int32_t temp6_1 = edi_1
                edi_1 += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
                
                i_1 = sub_517edc(&var_310, *(&var_314 + (edi_1 << 2)))
            while (i_1 != 3)
            int32_t var_55c_2 = sub_4cc7ec(*(&var_314 + (edi_1 << 2)))
            int32_t edi_2 = 0
            int32_t i_2
            
            do
                int32_t temp8_1 = edi_2
                edi_2 += 1
                
                if (add_overflow(temp8_1, 1))
                    sub_403010()
                    noreturn
                
                i_2 = sub_517edc(&var_310, *(&var_314 + (edi_2 << 2)))
            while (i_2 != 2)
            var_558 = sub_4cc7ec(*(&var_314 + (edi_2 << 2)))
        
        int32_t i_9 = 5
        void* eax_22 = &var_554
        int32_t i_3
        
        do
            *eax_22 = 0
            eax_22 += 4
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        int32_t edi_3 = 1
        
        while (true)
            if (add_overflow(var_52c, edi_3))
                sub_403010()
                noreturn
            
            if (var_52c + edi_3 s> 5)
                break
            
            (&var_558)[edi_3] = sub_4cd400(&var_108, edi_3)
            int32_t temp9_1 = edi_3
            edi_3 += 1
            
            if (add_overflow(temp9_1, 1))
                sub_403010()
                noreturn
    else
        int32_t var_55c = sub_4cd400(&var_310, 1)
        var_558 = sub_4cd400(&var_310, 2)
        int32_t i_7 = 2
        void var_548
        void* eax_9 = &var_548
        int32_t i_4
        
        do
            *eax_9 = 0
            eax_9 += 4
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)
        int32_t i_8 = 3
        void var_308
        void* esi_1 = &var_308
        void* ebx_1 = &var_554
        int32_t i_5
        
        do
            *ebx_1 = sub_4cc7ec(*esi_1)
            ebx_1 += 4
            esi_1 += 4
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
    
    if (arg2 != 0)
        void var_666
        __builtin_memcpy(&var_666, &var_310, 0x104)
        int16_t i_6
        
        if (*(*data_5301f4 + 0x111f9) == 0)
            while (i_6 s< 5)
                sub_5179dc(&var_666, sub_517b0c(&var_108, 1))
    
    __builtin_memcpy(arg3, &var_668, 0x130)
    return arg3
}
