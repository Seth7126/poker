// ============================================================
// 函数名称: sub_49cac4
// 虚拟地址: 0x49cac4
// WARP GUID: 07bc077f-9ec8-5ae7-8dfd-11b200fb02d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404248, sub_404078, sub_403010
// [被调用的父级函数]: sub_49cb30
// ============================================================

int32_t __fastcallsub_49cac4(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx = 1
    int32_t ebx = 1
    
    while (true)
        int32_t result = sub_404078(*arg2)
        
        if (ebx s> result)
            return result
        
        int32_t eax_1
        eax_1.b = *(*arg2 + ebx - 1)
        
        if (not(test_bit(*data_530a44, zx.d(eax_1.b))))
            *arg2
            
            if (eax_1.b != 0x5c)
                int32_t temp1_1 = ebx
                ebx += 1
                
                if (add_overflow(temp1_1, 1))
                    sub_403010()
                    noreturn
            else
                *(sub_404248(arg2) + ebx - 1) = 0x2f
                int32_t temp2_1 = ebx
                ebx += 1
                
                if (add_overflow(temp2_1, 1))
                    break
        else
            int32_t temp0_1 = ebx
            ebx += 2
            
            if (add_overflow(temp0_1, 2))
                sub_403010()
                noreturn
    
    sub_403010()
    noreturn
}
