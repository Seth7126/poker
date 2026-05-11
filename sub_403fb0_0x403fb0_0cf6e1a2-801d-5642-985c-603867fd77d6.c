// ============================================================
// 函数名称: sub_403fb0
// 虚拟地址: 0x403fb0
// WARP GUID: 0cf6e1a2-801d-5642-985c-603867fd77d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0
// [被调用的父级函数]: sub_4b498a, sub_40ae90, sub_4956c0, sub_4b556c, sub_484e24, sub_4b570c, sub_4b56b0, sub_409598, sub_49bcc0, sub_40a218, sub_49c237, sub_495888, sub_412154, sub_495877, sub_49bd14, sub_483f98, sub_451ff4, sub_4957d4, sub_405ae8, sub_488509, sub_40aecc
// ============================================================

int32_t __fastcallsub_403fb0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: void* ecx_1 = nullptr
    void* ecx_1 = nullptr
    
    if (arg2 != 0)
        char* var_4_1 = arg2
        
        while (0 != *arg2)
            if (0 != arg2[1])
                if (0 != arg2[2])
                    if (0 == arg2[3])
                        arg2 = &arg2[1]
                    else
                        arg2 = &arg2[4]
                        continue
                
                arg2 = &arg2[1]
            
            arg2 = &arg2[1]
            break
        
        char* ecx = arg2
        arg2 = var_4_1
        ecx_1 = ecx - arg2
    
    char** eax
    return sub_403ee0(eax, arg2, ecx_1) __tailcall
}
