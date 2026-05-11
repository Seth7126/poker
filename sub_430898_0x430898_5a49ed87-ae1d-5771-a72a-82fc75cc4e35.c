// ============================================================
// 函数名称: sub_430898
// 虚拟地址: 0x430898
// WARP GUID: 5a49ed87-ae1d-5771-a72a-82fc75cc4e35
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

int32_t* __fastcallsub_430898(int32_t arg1, char arg2, int32_t* arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_10 = *arg4
    int32_t var_10 = *arg4
    void var_c
    var_c.d = arg4[1]
    int32_t ebx = arg1
    int32_t* esi_3 = arg3
    char var_11 = 0
    
    if (*(esi_3 + 0x1ca) != 0)
        arg1.b = arg2
        esi_3[0x73]
        esi_3[0x72](&var_11, &var_10, ebx)
    
    if (var_11 == 0)
        esi_3[0x5e] += ebx
        
        while (true)
            int32_t ecx_3 = esi_3[0x5e]
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q(ecx_3)
            
            if ((eax_10 ^ edx_2) - edx_2 s< 0x78)
                break
            
            arg3.b = ecx_3 s< 0
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(esi_3[0x5e])
            esi_3[0x5e] = (eax_2 ^ edx_1) - edx_1 - 0x78
            int32_t ebx_2
            
            if (arg3.b == 0)
                edx_1.b = arg2
                ebx_2.w = 0xffc4
                var_11 = sub_4032ac(esi_3, edx_1, &var_10)
            else
                if ((eax_2 ^ edx_1) - edx_1 != 0x78)
                    esi_3[0x5e] = neg.d((eax_2 ^ edx_1) - edx_1 - 0x78)
                
                edx_1.b = arg2
                ebx_2.w = 0xffc5
                var_11 = sub_4032ac(esi_3, edx_1, &var_10)
    
    arg3.b = var_11
    return arg3
}
