// ============================================================
// 函数名称: sub_4061e0
// 虚拟地址: 0x4061e0
// WARP GUID: 33a7cf72-dbdc-5f71-9ffe-06eddc9dcb4c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLastError, CreateFileA, GetStdHandle
// [内部子函数调用]: sub_402844
// [被调用的父级函数]: sub_4062f8, sub_4062e1
// ============================================================

HANDLE __convention("regparm")sub_4061e0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx = arg1[1]
    int32_t edx = arg1[1]
    enum WIN32_ERROR eax_2
    int32_t edx_1
    
    if (edx == 0xd7b0)
    label_406209:
        arg1[1] = 0xd7b3
        arg1[2] = arg2
        arg1[9] = sub_406302
        arg1[7] = sub_40628b
        HANDLE result
        
        if (arg1[0x12].b == 0)
            arg1[9] = sub_40628b
            enum STD_HANDLE nStdHandle
            
            nStdHandle = arg3 == 3 ? STD_OUTPUT_HANDLE : STD_INPUT_HANDLE
            
            result = GetStdHandle(nStdHandle)
        else
            uint32_t dwDesiredAccess = 0xc0000000
            edx_1.b = data_53104a
            enum FILE_SHARE_MODE dwShareMode = *(((edx_1 & 0x70) u>> 2) + 0x4062c1)
            enum FILE_CREATION_DISPOSITION dwCreationDisposition = CREATE_ALWAYS
            
            if (arg3 != 3)
                dwCreationDisposition = OPEN_EXISTING
                
                if (arg3 != 2)
                    dwDesiredAccess = 0x40000000
                    arg1[1] = 0xd7b2
                    
                    if (arg3 != 1)
                        dwDesiredAccess = 0x80000000
                        arg1[1] = 0xd7b1
            
            result = CreateFileA(&arg1[0x12], dwDesiredAccess, dwShareMode, nullptr, 
                dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, nullptr)
        
        if (result != 0xffffffff)
            *arg1 = result
            return result
        
        arg1[1] = 0xd7b0
        eax_2 = GetLastError()
    else
        if (edx - 0xd7b0 u<= 3)
            int32_t eax
            eax, edx_1 = arg1[9]()
            
            if (eax != 0)
                sub_402844(eax)
            
            goto label_406209
        
        eax_2 = ERROR_SEM_IS_SET
    return sub_402844(eax_2)
}
