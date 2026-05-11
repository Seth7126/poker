// ============================================================
// 函数名称: sub_4c02cc
// 虚拟地址: 0x4c02cc
// WARP GUID: 27a3465b-d91f-5ba3-b3d6-5b0212f29310
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_5177dc, sub_517a94, sub_4cd0a0, sub_4cb9a0, sub_4702a8, sub_4bf070, sub_4cc9c8, sub_51765c, sub_4bc450, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4b77e0, sub_4babf8, sub_4c27e4
// ============================================================

int32_t* __fastcallsub_4c02cc(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    *arg4 = 0
    arg4[2] = 0
    int32_t* result
    int32_t var_240
    
    if (*(data_5301b0 + 0x69c24) != 0)
        void var_344
        sub_4bc450(&var_344)
        void var_13c
        sub_51765c(data_5301b0 + 0x6998c, &var_13c)
        bool o_1 = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        sub_51765c(data_5301b0 + arg3 * 0x8d14 - 0x364, &var_240)
        int16_t i_5
        int32_t i_2 = sx.d(i_5)
        
        if (i_2 s> 0)
            void* esi_1 = &var_13c
            int32_t i
            
            do
                sub_517a94(&var_344, *esi_1)
                esi_1 += 4
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int16_t i_4
        int32_t i_3 = sx.d(i_4)
        
        if (i_3 s> 0)
            int32_t* esi_2 = &var_240
            int32_t i_1
            
            do
                sub_517a94(&var_344, *esi_2)
                esi_2 = &esi_2[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        void var_448
        __builtin_memcpy(&var_448, &var_13c, 0x104)
        sub_5177dc(&var_448, &var_240)
        char var_11_1 = 0xa
        void var_54c
        __builtin_memcpy(&var_54c, &var_344, 0x104)
        int32_t var_1c_1 = 0x3f800000
        int32_t var_28_1 = 0x3f800000
        *arg4 = 0
        arg4[2] = 0
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        uint32_t ebx_1 = GetTickCount()
        int32_t edi_1 = sub_402b4c(fconvert.t(1f) / fconvert.t(*(*data_530304 + 0x11cc))
            * fconvert.t(1000f) / fconvert.t(2f))
        result = nullptr
        int32_t var_34_1 = 0
        
        if (var_11_1 != 0)
            do
                uint32_t eax_22 = GetTickCount()
                int32_t* var_57c_1 = ebp_1
                void* eax_23
                eax_23.b = *(ebp_1 - 0xd)
                int32_t eax_24 = sx.d(ebp_1[-0xe].w)
                
                if (add_overflow(5, neg.d(eax_24)))
                    sub_403010()
                    noreturn
                
                sub_4bf070(&ebp_1[-0x8f], &ebp_1[-0x4e], &ebp_1[-0x152], &ebp_1[-0x15a], ebp_1[-3], 
                    ebp_1[-2], 0, 1, 0, 5 - eax_24, eax_23.b, &ebp_1[-0xd0])
                uint32_t var_57c_2 = eax_22
                __builtin_memcpy(&ebp_1[-0x156], &ebp_1[-0x15a], 0x10)
                GetTickCount()
                int32_t esi_6 = 0
                
                while (true)
                    uint32_t eax_40 = GetTickCount()
                    int32_t eax_42
                    int32_t edx_17
                    edx_17:eax_42 = sx.q(ebx_1)
                    int32_t var_57c_5 = sbb.d(0, edx_17, eax_40 u< eax_42)
                    int32_t eax_45
                    int32_t edx_19
                    edx_19:eax_45 = sx.q(edi_1)
                    
                    if (edx_19 != var_57c_5)
                        if (edx_19 s>= var_57c_5)
                            break
                    else if (eax_45 u>= eax_40 - eax_42)
                        break
                    
                    if (esi_6 s> 2)
                        break
                    
                    ebp_1[-0xd] = GetTickCount()
                    ebp_1 = sub_4702a8(*data_530304, 1)
                    uint32_t eax_32 = GetTickCount()
                    int32_t eax_34
                    int32_t edx_13
                    edx_13:eax_34 = sx.q(ebp_1[-0xd])
                    
                    if (add_overflow(edi_1, ebx_1))
                        sub_403010()
                        noreturn
                    
                    int32_t eax_38
                    int32_t edx_15
                    edx_15:eax_38 = sx.q(edi_1 + ebx_1)
                    bool o_4 = unimplemented  {adc edx, dword [esp+0x4]}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    ebx_1 = eax_38 + eax_32 - eax_34
                    int32_t temp16_1 = ebp_1[-0xc]
                    ebp_1[-0xc] += 1
                    
                    if (add_overflow(temp16_1, 1))
                        sub_403010()
                        noreturn
                    
                    int32_t temp17_1 = esi_6
                    esi_6 += 1
                    
                    if (add_overflow(temp17_1, 1))
                        sub_403010()
                        noreturn
                
                if (ebp_1[-5] s> 1)
                    int32_t temp9_1 = ebp_1[-5]
                    ebp_1[-5] -= 1
                    
                    if (add_overflow(temp9_1, 0xffffffff))
                        sub_403010()
                        noreturn
                
                *ebp_1[2] = fconvert.s(fconvert.t(ebp_1[-0x155]) * fconvert.t(ebp_1[-6])
                    + fconvert.t(*ebp_1[2]))
                *(ebp_1[2] + 8) = fconvert.s(fconvert.t(ebp_1[-0x153]) * fconvert.t(ebp_1[-9])
                    + fconvert.t(*(ebp_1[2] + 8)))
                ebp_1[-8] = fconvert.s(fconvert.t(ebp_1[-0x155]) * fconvert.t(ebp_1[-6])
                    + fconvert.t(ebp_1[-8]))
                ebp_1[-7] = fconvert.s(fconvert.t(ebp_1[-0x156]) * fconvert.t(ebp_1[-6])
                    + fconvert.t(ebp_1[-7]))
                ebp_1[-0xb] = fconvert.s(fconvert.t(ebp_1[-0x153]) * fconvert.t(ebp_1[-9])
                    + fconvert.t(ebp_1[-0xb]))
                ebp_1[-0xa] = fconvert.s(fconvert.t(ebp_1[-0x154]) * fconvert.t(ebp_1[-9])
                    + fconvert.t(ebp_1[-0xa]))
                void* eax_51
                eax_51.b = *(ebp_1 - 0xd)
                int32_t eax_52 = sub_4cd0a0(eax_51.b)
                
                if (add_overflow(eax_52, 0xffffffff))
                    sub_403010()
                    noreturn
                
                result = sub_4cc9c8(eax_52 - 1)
                *(ebp_1 - 0xd) = result.b
                ebp_1[-6] = fconvert.s(fconvert.t(ebp_1[-6])
                    - fconvert.t(ebp_1[-6]) * fconvert.t(ebp_1[-0x156]))
                ebp_1[-9] = fconvert.s(fconvert.t(ebp_1[-9])
                    - fconvert.t(ebp_1[-9]) * fconvert.t(ebp_1[-0x154]))
            while (*(ebp_1 - 0xd) != 0)
        
        if (ebp_1[-0xc] s> 0)
            result = *data_530304
            result[0x4cd].b = 1
    else
        bool o = unimplemented  {imul eax, dword [ebp-0x4], 0x2345}
        
        if (o)
            sub_403010()
            noreturn
        
        sub_51765c(data_5301b0 + arg3 * 0x8d14 - 0x364, &var_240)
        int32_t var_23c
        *arg4 = fconvert.s(sub_4cb9a0(var_240.w, var_23c, arg2))
        result = arg4
        result[2] = fconvert.s(sub_4cb9a0(var_240.w, var_23c, arg1))
    *ebp_1
    return result
}
